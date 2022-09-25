using System.Collections.Generic;
using UnityEngine;

public class GetActionList : MonoBehaviour
{
    public class Action
    {
        public string H1 { get; set; }
        public string H2 { get; set; }
        public string H3 { get; set; }
        public string H4 { get; set; }
        public string H5 { get; set; }
        public string H6 { get; set; }
    }

    public class Root
    {
        public string Winner { get; set; }
        public List<Action> Actions { get; set; }
    }
}
