using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum MoveDirection{
	Left, Right, Up, Down
}

public class InputManager : MonoBehaviour {

	private GameManager gm;

	void Awake() {
		gm = GameObject.FindObjectOfType<GameManager> ();
	}

	void Start () {
		
	}

	void Update () {
		if (gm.State == GameState.Playing) {
			if (Input.GetKeyDown (KeyCode.RightArrow)) {
				//right 
				gm.Move (MoveDirection.Right);
			}

			if (Input.GetKeyDown (KeyCode.LeftArrow)) {
				//right 
				gm.Move (MoveDirection.Left);
			}

			if (Input.GetKeyDown (KeyCode.DownArrow)) {
				//right 
				gm.Move (MoveDirection.Down);
			}

			if (Input.GetKeyDown (KeyCode.UpArrow)) {
				//right 
				gm.Move (MoveDirection.Up);
			}
		}
	}
}
