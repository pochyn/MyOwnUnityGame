using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class TileStyle{
	public int Number;
	public Color32 TileColor;
	public Color32 TextColor;
	//public Image image;
	public Sprite sprite;
}
	
public class TileStyleHolder : MonoBehaviour {

	public static TileStyleHolder Instance;

	public TileStyle[] TileStyles;

	void Awake() {
		Instance = this;
	}
}
