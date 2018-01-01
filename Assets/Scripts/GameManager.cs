using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;

//using System;

public enum GameState {
	Playing,
	GameOver,
	WaitingForMoveToEnd
}


public class GameManager : MonoBehaviour {
	// test test test
	public GameState State;
	[Range(0, 1f)]
	public float delay;
	private bool moveMade;
	private bool[] lineMoveComplete = new bool[7]{true, true, true, true, true, true, true};

	public GameObject YouWonText;
	public GameObject GameOverText;
	public Text GameOverScoreText;
	public Text LevelTop;
	public GameObject GameOverPanel;

	public GameObject ContinueButtonWon;
	public GameObject ContinueButtonLoose;
	public GameObject MainPanel;

	public Text MovesLeft;

	private float time = 300.0f;
	public Text TimeText;

	public Text TimeLapsText;
	public Text TwoText;
	public Text FourText;
	public Text EightText;
	public Text BlackHole;

	public int Moves;

	public AudioClip otherClip;
	//public AudioClip mainClip;

	public Image lvl1Aim;
	public Image lvl3Aim;
	public Image lvl5Aim1;
	public Image lvl5Aim2;
	public Image lvl5Aim3;

	Tile[,] AllTiles;
	//private Tile[,] AllTiles = new Tile[7,7];
	private List<Tile[]> columns = new List<Tile[]> ();
	private List<Tile[]> rows = new List<Tile[]> ();
	private List<Tile> EmptyTiles = new List<Tile>();

	void Start () {
		//AudioSource.PlayClipAtPoint(mainClip, transform.position, 0.99f);
		Tile[] AllTilesOneDim = GameObject.FindObjectsOfType<Tile> ();
		//Array.Sort (AllTilesOneDim, SortByRowColumn);
		/*
		foreach (Tile t in AllTilesOneDim) {
			Debug.Log (t);
			t.Number = 0;
			AllTiles [t.indRow, t.indCol] = t;
			EmptyTiles.Add (t);
		}*/

		//
		//
		//
		//
		//
		/*int i = 0;
		while (i < 49) {
			foreach (Tile t in AllTilesOneDim) {
				string s = "Tile";
				string s2 = s + i.ToString ();
				if (t.tag == s2) {
					t.Number = 0;
					AllTiles [t.indRow, t.indCol] = t;
					EmptyTiles.Add (t);
					i++;
					break;
				}
			}
		}

			
		columns.Add (new Tile[]{ AllTiles [0, 0], AllTiles [1, 0], AllTiles [2, 0], AllTiles [3, 0], AllTiles [4, 0], AllTiles [5, 0], AllTiles [6, 0]});
		columns.Add (new Tile[]{ AllTiles [0, 1], AllTiles [1, 1], AllTiles [2, 1], AllTiles [3, 1], AllTiles [4, 1], AllTiles [5, 1], AllTiles [6, 1]});
		columns.Add (new Tile[]{ AllTiles [0, 2], AllTiles [1, 2], AllTiles [2, 2], AllTiles [3, 2], AllTiles [4, 2], AllTiles [5, 2], AllTiles [6, 2]});
		columns.Add (new Tile[]{ AllTiles [0, 3], AllTiles [1, 3], AllTiles [2, 3], AllTiles [3, 3], AllTiles [4, 3], AllTiles [5, 3], AllTiles [6, 3]});
		columns.Add (new Tile[]{ AllTiles [0, 4], AllTiles [1, 4], AllTiles [2, 4], AllTiles [3, 4], AllTiles [4, 4], AllTiles [5, 4], AllTiles [6, 4]});
		columns.Add (new Tile[]{ AllTiles [0, 5], AllTiles [1, 5], AllTiles [2, 5], AllTiles [3, 5], AllTiles [4, 5], AllTiles [5, 5], AllTiles [6, 5]});
		columns.Add (new Tile[]{ AllTiles [0, 6], AllTiles [1, 6], AllTiles [2, 6], AllTiles [3, 6], AllTiles [4, 6], AllTiles [5, 6], AllTiles [6, 6]});

		rows.Add (new Tile[]{ AllTiles [0, 0], AllTiles [0, 1], AllTiles [0, 2], AllTiles [0, 3], AllTiles [0, 4], AllTiles [0, 5], AllTiles [0, 6]});
		rows.Add (new Tile[]{ AllTiles [1, 0], AllTiles [1, 1], AllTiles [1, 2], AllTiles [1, 3], AllTiles [1, 4], AllTiles [1, 5], AllTiles [1, 6]});
		rows.Add (new Tile[]{ AllTiles [2, 0], AllTiles [2, 1], AllTiles [2, 2], AllTiles [2, 3], AllTiles [2, 4], AllTiles [2, 5], AllTiles [2, 6]});
		rows.Add (new Tile[]{ AllTiles [3, 0], AllTiles [3, 1], AllTiles [3, 2], AllTiles [3, 3], AllTiles [3, 4], AllTiles [3, 5], AllTiles [3, 6]});
		rows.Add (new Tile[]{ AllTiles [4, 0], AllTiles [4, 1], AllTiles [4, 2], AllTiles [4, 3], AllTiles [4, 4], AllTiles [4, 5], AllTiles [4, 6]});
		rows.Add (new Tile[]{ AllTiles [5, 0], AllTiles [5, 1], AllTiles [5, 2], AllTiles [5, 3], AllTiles [5, 4], AllTiles [5, 5], AllTiles [5, 6]});
		rows.Add (new Tile[]{ AllTiles [6, 0], AllTiles [6, 1], AllTiles [6, 2], AllTiles [6, 3], AllTiles [6, 4], AllTiles [6, 5], AllTiles [6, 6]});
		*/
		//
		//
		//
		//
		//

		if (!PlayerPrefs.HasKey ("Level")) {
			PlayerPrefs.SetInt ("Level", 1);
		}
		if (PlayerPrefs.GetInt ("Level") == 1 || PlayerPrefs.GetInt ("Level") == 2) {
			AllTiles = new Tile[1,3];
			tilesSetup (3, AllTilesOneDim);
			columns.Add (new Tile[]{ AllTiles [0, 0] });
			columns.Add (new Tile[]{ AllTiles [0, 1] });
			columns.Add (new Tile[]{ AllTiles [0, 2] });
			rows.Add (new Tile[]{ AllTiles [0, 0], AllTiles [0, 1], AllTiles [0, 2] });
			if (PlayerPrefs.GetInt ("Level") == 1) {
				Moves = 100;
			} else {
				Moves = 200;
			}

		}

		if (PlayerPrefs.GetInt ("Level") == 3 || PlayerPrefs.GetInt ("Level") == 4) {
			AllTiles = new Tile[3,3];
			tilesSetup (9, AllTilesOneDim);
			columns.Add (new Tile[]{ AllTiles [0, 0], AllTiles [1, 0], AllTiles [2, 0] });
			columns.Add (new Tile[]{ AllTiles [0, 1], AllTiles [1, 1], AllTiles [2, 1] });
			columns.Add (new Tile[]{ AllTiles [0, 2], AllTiles [1, 2], AllTiles [2, 2] });
			rows.Add (new Tile[]{ AllTiles [0, 0], AllTiles [0, 1], AllTiles [0, 2] });
			rows.Add (new Tile[]{ AllTiles [1, 0], AllTiles [1, 1], AllTiles [1, 2] });
			rows.Add (new Tile[]{ AllTiles [2, 0], AllTiles [2, 1], AllTiles [2, 2] });
			if (PlayerPrefs.GetInt ("Level") == 3) {
				Moves = 5000;
			}
			if (PlayerPrefs.GetInt ("Level") == 4) {
				Moves = 70000;
			}

		}


		if (PlayerPrefs.GetInt ("Level") == 5 || PlayerPrefs.GetInt ("Level") == 6 || PlayerPrefs.GetInt ("Level") == 7) {
			AllTiles = new Tile[5,5];
			tilesSetup (9, AllTilesOneDim);
			columns.Add (new Tile[]{ AllTiles [0, 0], AllTiles [1, 0], AllTiles [2, 0], AllTiles [3, 0], AllTiles [4, 0] });
			columns.Add (new Tile[]{ AllTiles [0, 1], AllTiles [1, 1], AllTiles [2, 1], AllTiles [3, 1], AllTiles [4, 1] });
			columns.Add (new Tile[]{ AllTiles [0, 2], AllTiles [1, 2], AllTiles [2, 2], AllTiles [3, 2], AllTiles [4, 2] });
			columns.Add (new Tile[]{ AllTiles [0, 3], AllTiles [1, 3], AllTiles [2, 3], AllTiles [3, 3], AllTiles [4, 3] });
			columns.Add (new Tile[]{ AllTiles [0, 4], AllTiles [1, 4], AllTiles [2, 4], AllTiles [3, 4], AllTiles [4, 4] });
			rows.Add (new Tile[]{ AllTiles [0, 0], AllTiles [0, 1], AllTiles [0, 2], AllTiles [0, 3], AllTiles [0, 4] });
			rows.Add (new Tile[]{ AllTiles [1, 0], AllTiles [1, 1], AllTiles [1, 2], AllTiles [1, 3], AllTiles [1, 4] });
			rows.Add (new Tile[]{ AllTiles [2, 0], AllTiles [2, 1], AllTiles [2, 2], AllTiles [2, 3], AllTiles [2, 4] });
			rows.Add (new Tile[]{ AllTiles [3, 0], AllTiles [3, 1], AllTiles [3, 2], AllTiles [3, 3], AllTiles [3, 4] });
			rows.Add (new Tile[]{ AllTiles [4, 0], AllTiles [4, 1], AllTiles [4, 2], AllTiles [4, 3], AllTiles [4, 4] });
			if (PlayerPrefs.GetInt ("Level") == 5) {
				Moves = 700;
			}
			if (PlayerPrefs.GetInt ("Level") == 6) {
				Moves = 900;
			}
			if (PlayerPrefs.GetInt ("Level") == 7) {
				Moves = 1100;
			}

		}
			
		if (!PlayerPrefs.HasKey ("TimeLaps")) {
			PlayerPrefs.SetInt ("TimeLaps", 100);
		}
		TimeLapsText.text = PlayerPrefs.GetInt("TimeLaps").ToString();

		if (!PlayerPrefs.HasKey ("Twos")) {
			PlayerPrefs.SetInt ("Twos", 200);
		}
		TwoText.text = PlayerPrefs.GetInt("Twos").ToString();

		if (!PlayerPrefs.HasKey ("Fourth")) {
			PlayerPrefs.SetInt ("Fourth", 100);
		}
		FourText.text = PlayerPrefs.GetInt("Fourth").ToString();

		if (!PlayerPrefs.HasKey ("Eights")) {
			PlayerPrefs.SetInt ("Eights", 500);
		}
		EightText.text = PlayerPrefs.GetInt("Eights").ToString();

		if (!PlayerPrefs.HasKey ("BlackHole")) {
			PlayerPrefs.SetInt ("BlackHole", 100);
		}
		BlackHole.text = PlayerPrefs.GetInt("BlackHole").ToString();

		Generate ();
		State = GameState.Playing;

		LevelTop.text = PlayerPrefs.GetInt ("Level").ToString();
	}
		
	void Update() {	
		MovesLeft.text = Moves.ToString ();


		if (time > 0) {
			time -= Time.deltaTime;
			TimeText.text = Mathf.Round (time).ToString ();
		} else {
			GameOver ();
		}


		if (PlayerPrefs.GetInt ("Level") == 1) {
			if (AllTiles [0, 2].Number != 0) {
				lvl1Aim.enabled = false;
			}

			if (AllTiles [0, 2].Number == 2 && !(State == GameState.WaitingForMoveToEnd)) {
				YouWon ();
			}
		}
		if (PlayerPrefs.GetInt ("Level") == 2) {
			if (AllTiles [0, 2].Number != 0) {
				lvl1Aim.enabled = false;
			}

			if (AllTiles [0, 2].Number == 4 && !(State == GameState.WaitingForMoveToEnd)) {
				YouWon ();
			}
		}

		if (PlayerPrefs.GetInt ("Level") == 3) {
			if (AllTiles [2, 0].Number != 0) {
				lvl1Aim.enabled = false;
			}

			if (AllTiles [2, 2].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [2, 2].Number == 4 && AllTiles [2, 0].Number == 2 && !(State == GameState.WaitingForMoveToEnd)) {
				YouWon ();
			}
		}

		if (PlayerPrefs.GetInt ("Level") == 4) {
			if (AllTiles [1, 1].Number != 0) {
				lvl1Aim.enabled = false;
			}

			if (AllTiles [2, 2].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [1, 1].Number == 8 && AllTiles [2, 2].Number == 2 && !(State == GameState.WaitingForMoveToEnd)) {
				YouWon ();
			}
		}

		if (PlayerPrefs.GetInt ("Level") == 4) {
			if (AllTiles [0, 4].Number != 0) {
				lvl1Aim.enabled = false;
			}

			if (AllTiles [1, 4].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [2, 4].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [3, 4].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [4, 4].Number != 0) {
				lvl3Aim.enabled = false;
			}

			if (AllTiles [0, 4].Number == 32 && AllTiles [1, 4].Number == 32 && AllTiles [2, 4].Number == 32 && AllTiles [3, 4].Number == 32 && AllTiles [4, 4].Number == 32 && !(State == GameState.WaitingForMoveToEnd)) {
				YouWon ();
			}
		}

		if (GameOverPanel.activeSelf) {
			time += Time.deltaTime;
			TimeText.text = Mathf.Round (time).ToString ();
		}


		if (Moves <= 0 && !(State == GameState.WaitingForMoveToEnd) && YouWonText.activeSelf == false) {
			GameOver ();
		}

	}

	//
	//
	//
	//

	private void SetPleyerPrefsTimeLaps(int value, string prefabName){
		int timeLaps = PlayerPrefs.GetInt(prefabName);
		timeLaps += value;
		PlayerPrefs.SetInt (prefabName, timeLaps);
		if (prefabName == "TimeLaps") {
			TimeLapsText.text = PlayerPrefs.GetInt (prefabName).ToString ();
		}
		if (prefabName == "Twos") {
			TwoText.text = PlayerPrefs.GetInt (prefabName).ToString ();
		}
		if (prefabName == "Fourth") {
			FourText.text = PlayerPrefs.GetInt (prefabName).ToString ();
		}
		if (prefabName == "Eights") {
			EightText.text = PlayerPrefs.GetInt (prefabName).ToString ();
		}
		if (prefabName == "BlackHole") {
			BlackHole.text = PlayerPrefs.GetInt (prefabName).ToString ();
		}
	}

	public void tilesSetup (int treshold, Tile [] tiles){
		int i = 0;
		while (i < treshold) {
			foreach (Tile t in tiles) {
				string s = "Tile";
				string s2 = s + i.ToString ();
				if (t.tag == s2) {
					t.Number = 0;
					AllTiles [t.indRow, t.indCol] = t;
					EmptyTiles.Add (t);
					i++;
					break;
				}
			}
		}
	}

	public void AdditionalTimeHandler(){
		if (PlayerPrefs.GetInt ("TimeLaps") > 0) {
			SetPleyerPrefsTimeLaps (-1, "TimeLaps");
			time += 10.0f;
			ScoreTracker.Instance.Score += 16;
		}
	}

	public void AdditionalTwo(){
		if (EmptyTiles.Count > 0) {
			if (PlayerPrefs.GetInt ("Twos") > 0) {
				SetPleyerPrefsTimeLaps (-1, "Twos");
				EmptyTiles [0].Number = 2;
				EmptyTiles [0].PlayAppearAnimation ();
				EmptyTiles.RemoveAt (0);
				ScoreTracker.Instance.Score += 2;
				if (!CanMove()){
					GameOver();
				}

			}
		}
	}

	public void AdditionalFour(){
		if (EmptyTiles.Count > 0) {
			if (PlayerPrefs.GetInt ("Fourth") > 0) {
				SetPleyerPrefsTimeLaps (-1, "Fourth");
				EmptyTiles [0].Number = 4;
				EmptyTiles [0].PlayAppearAnimation ();
				EmptyTiles.RemoveAt (0);
				ScoreTracker.Instance.Score += 4;
				if (!CanMove()){
					GameOver();
				}
			}
		}
	}

	public void AdditionalEight(){
		if (EmptyTiles.Count > 0) {
			if (PlayerPrefs.GetInt ("Eights") > 0) {
				SetPleyerPrefsTimeLaps (-1, "Eights");
				EmptyTiles [0].Number = 8;
				EmptyTiles [0].PlayAppearAnimation ();
				EmptyTiles.RemoveAt (0);
				ScoreTracker.Instance.Score += 8;
				if (!CanMove()){
					GameOver();
				}
			}
		}
	}

	public void BlackHoleButton(){
		if (PlayerPrefs.GetInt ("BlackHole") > 0) {
			SetPleyerPrefsTimeLaps (-1, "BlackHole");
			for (int i = 1; i < 6; i++) {
				for (int j = 1; j < 6; j++) {
					AllTiles [i, j].Number = 0;
				}
			}
			UpdateEmptyTiles ();
			ScoreTracker.Instance.Score += 128;
		}
	}

	public void ContinueButtonHandler(){
		int lvl = PlayerPrefs.GetInt ("Level") + 1;
		PlayerPrefs.SetInt ("Level", lvl); 
		string s = "lvl" + lvl.ToString ();
		SceneManager.LoadScene(s, LoadSceneMode.Single);
	}

	public void NewGameButtonHandler(){
		int lvl = PlayerPrefs.GetInt ("Level"); 
		string s = "lvl" + lvl.ToString ();
		SceneManager.LoadScene(s, LoadSceneMode.Single);
	}

	public void BackButtonHandler(){
		SceneManager.LoadScene("Menu", LoadSceneMode.Single);
	}

	private void YouWon() {
		ContinueButtonLoose.SetActive (false);
		GameOverText.SetActive (false);
		ContinueButtonWon.SetActive (true);
		YouWonText.SetActive (true);
		GameOverScoreText.text = ScoreTracker.Instance.Score.ToString ();
		GameOverPanel.SetActive (true);
		State = GameState.WaitingForMoveToEnd;
	}

	private void GameOver () {
		ContinueButtonLoose.SetActive (true);
		GameOverText.SetActive (true);
		ContinueButtonWon.SetActive (false);
		YouWonText.SetActive (false);

		GameOverScoreText.text = ScoreTracker.Instance.Score.ToString ();
		GameOverPanel.SetActive (true);
	}

	bool CanMove () {
		if (EmptyTiles.Count > 0) {
			return true;
		} else {
			for (int i = 0; i < columns.Count; i++) {
				for (int j = 0; j < rows.Count - 1; j++) {
					if (AllTiles [j, i].Number == AllTiles [j + 1, i].Number) {
						return true;
					}
				}
			}

			for (int i = 0; i < rows.Count; i++) {
				for (int j = 0; j < columns.Count - 1; j++) {
					if (AllTiles [i, j].Number == AllTiles [i, j + 1].Number) {
						return true;
					}
				}
			}
		}
		return false;
	}

	bool MakeOneMoveDownIndex(Tile[] LineOfTiles){
		for (int i = 0; i < LineOfTiles.Length - 1; i++) {
			if (LineOfTiles [i].Number == 0 && LineOfTiles [i + 1].Number != 0) {
				LineOfTiles [i].Number = LineOfTiles [i + 1].Number;
				LineOfTiles [i + 1].Number = 0;
				return true;
			}


			if (LineOfTiles [i].Number != 0 && LineOfTiles [i].Number == LineOfTiles [i + 1].Number &&
			    LineOfTiles [i].mergedThisTurn == false && LineOfTiles [i + 1].mergedThisTurn == false) {
				LineOfTiles [i].Number *= 2;
				LineOfTiles [i + 1].Number = 0;
				LineOfTiles [i].mergedThisTurn = true;
				LineOfTiles [i].PlayMergeAnimation ();
				AudioSource.PlayClipAtPoint(otherClip, transform.position);
				if (LineOfTiles [i].Number == 128) {
					SetPleyerPrefsTimeLaps (1, "TimeLaps");
				}
				if (LineOfTiles [i].Number == 8) {
					SetPleyerPrefsTimeLaps (1, "Twos");
				}
				if (LineOfTiles [i].Number == 32) {
					SetPleyerPrefsTimeLaps (1, "Fourth");
				}
				if (LineOfTiles [i].Number == 64) {
					SetPleyerPrefsTimeLaps (1, "Eights");
				}
				if (LineOfTiles [i].Number == 512) {
					SetPleyerPrefsTimeLaps (1, "BlackHole");
				}
				ScoreTracker.Instance.Score += LineOfTiles [i].Number;
				if (LineOfTiles [i].Number == 4096) {
					YouWon ();
				}
				return true;
			}

		}
		if (Moves < 0) {
			GameOver ();
		}
		return false;
	}


	bool MakeOneMoveUpIndex(Tile[] LineOfTiles){
		for (int i = LineOfTiles.Length - 1; i > 0; i--) {
			if (LineOfTiles [i].Number == 0 && LineOfTiles [i - 1].Number != 0) {
				LineOfTiles [i].Number = LineOfTiles [i - 1].Number;
				LineOfTiles [i - 1].Number = 0;
				return true;
			}

			if (LineOfTiles [i].Number != 0 && LineOfTiles [i].Number == LineOfTiles [i - 1].Number &&
				LineOfTiles [i].mergedThisTurn == false && LineOfTiles [i - 1].mergedThisTurn == false) {
				LineOfTiles [i].Number *= 2;
				LineOfTiles [i - 1].Number = 0;
				LineOfTiles [i].mergedThisTurn = true;
				LineOfTiles [i].PlayMergeAnimation ();
				AudioSource.PlayClipAtPoint(otherClip, transform.position);
				if (LineOfTiles [i].Number == 128) {
					SetPleyerPrefsTimeLaps (1, "TimeLaps");
				}
				if (LineOfTiles [i].Number == 8) {
					SetPleyerPrefsTimeLaps (1, "Twos");
				}
				if (LineOfTiles [i].Number == 32) {
					SetPleyerPrefsTimeLaps (1, "Fourth");
				}
				if (LineOfTiles [i].Number == 64) {
					SetPleyerPrefsTimeLaps (1, "Eights");
				}
				if (LineOfTiles [i].Number == 512) {
					SetPleyerPrefsTimeLaps (1, "BlackHole");
				}
				ScoreTracker.Instance.Score += LineOfTiles [i].Number;
				if (LineOfTiles [i].Number == 4096) {
					YouWon ();
				}
				return true;
			}

		}
		if (Moves < 0) {
			GameOver ();
		}
		return false;
	}

	void Generate (){
		//int rnd = UnityEngine.Random.Range (1, 4);
		int rnd = UnityEngine.Random.Range (1, 1);
		if (rnd == 1) {
			GenerateNewNumber (2);
		}
		if (rnd == 2) {
			GenerateNewNumber (4);
		}
		if (rnd == 3) {
			GenerateNewNumber (8);
		}
	}
		
	void GenerateNewNumber (int number){
		if (EmptyTiles.Count > 0) {
			if (PlayerPrefs.GetInt ("Level") == 1 || PlayerPrefs.GetInt ("Level") == 2 || 
			PlayerPrefs.GetInt ("Level") == 3 || PlayerPrefs.GetInt ("Level") == 4) {
				EmptyTiles [0].Number = number;
				EmptyTiles [0].PlayAppearAnimation ();
				EmptyTiles.RemoveAt (0);
			} else {
				int indexForNewNumber = Random.Range (0, EmptyTiles.Count);
				EmptyTiles [indexForNewNumber].Number = number;
				EmptyTiles [indexForNewNumber].PlayAppearAnimation ();
				EmptyTiles.RemoveAt (indexForNewNumber);
			}
		}

	}

	private void ResetMergedFlags(){
		foreach (Tile t in AllTiles){
			t.mergedThisTurn = false;
		}
	}
		
	private void UpdateEmptyTiles(){
		EmptyTiles.Clear();
		foreach (Tile t in AllTiles) {
			if (t.Number == 0) {
				EmptyTiles.Add (t);
			}
		}
		Moves -= 1;
	}

	public void Move(MoveDirection md)
	{
		moveMade = false;
		ResetMergedFlags ();
		if (delay > 0)
			StartCoroutine (MoveCoroutine (md));
		else 
		{
			for (int i =0; i< rows.Count; i++) 
			{
				switch (md) 
				{
				case MoveDirection.Down:
					while (MakeOneMoveUpIndex(columns[i])) 
					{
						moveMade = true;
					}
					break;
				case MoveDirection.Left:
					while (MakeOneMoveDownIndex(rows[i])) 
					{
						moveMade =true;
					}
					break;
				case MoveDirection.Right:
					while (MakeOneMoveUpIndex(rows[i])) 
					{
						moveMade =true;
					}
					break;
				case MoveDirection.Up:
					while (MakeOneMoveDownIndex(columns[i])) 
					{
						moveMade =true;
					}
					break;
				}
			}

			if (moveMade) 
			{
				UpdateEmptyTiles ();
				Generate ();

				if (!CanMove())
				{
					GameOver();
				}

			}
		}
	}

	IEnumerator MoveOneLineUpIndexCoroutine(Tile[] line, int index){
		lineMoveComplete [index] = false;
		while (MakeOneMoveUpIndex(line)) {
			moveMade = true;
			yield return new WaitForSeconds(delay);
		}
		lineMoveComplete [index] = true;
	}

	IEnumerator MoveOneLineDownIndexCoroutine(Tile[] line, int index){
		lineMoveComplete [index] = false;
		while (MakeOneMoveDownIndex(line)) 
		{
			moveMade = true;
			yield return new WaitForSeconds(delay);
		}
		lineMoveComplete [index] = true;
	}

	IEnumerator MoveCoroutine(MoveDirection md){
		State = GameState.WaitingForMoveToEnd;

		switch (md) 
		{
		case MoveDirection.Down:
			for (int i = 0; i< columns.Count; i++)
				StartCoroutine(MoveOneLineUpIndexCoroutine(columns[i], i));
			break;
		case MoveDirection.Left: 
			for (int i = 0; i< rows.Count; i++)
				StartCoroutine(MoveOneLineDownIndexCoroutine(rows[i], i));
			break;
		case MoveDirection.Right:
			for (int i = 0; i< rows.Count; i++)
				StartCoroutine(MoveOneLineUpIndexCoroutine(rows[i], i));
			break;
		case MoveDirection.Up: 
			for (int i = 0; i< columns.Count; i++)
				StartCoroutine(MoveOneLineDownIndexCoroutine(columns[i], i));
			break;

		}

		// Wait until the move is over in all lines
		while (! (lineMoveComplete[0] && lineMoveComplete[1] && lineMoveComplete[2] && lineMoveComplete[3] && lineMoveComplete[4] && lineMoveComplete[5] && lineMoveComplete[6]))
			yield return null;

		if (moveMade) {
			UpdateEmptyTiles ();
			Generate ();

			if (!CanMove()){
				GameOver();
			}

		}

		State = GameState.Playing;
		StopAllCoroutines ();
	}
}
