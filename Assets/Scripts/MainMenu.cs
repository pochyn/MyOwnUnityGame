using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (!PlayerPrefs.HasKey ("Level")) {
			PlayerPrefs.SetInt ("Level", 1);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PlayButton(){
		int lvl = PlayerPrefs.GetInt ("Level"); 
		string s = "lvl" + lvl.ToString ();
		SceneManager.LoadScene(s, LoadSceneMode.Single);
	}
}
