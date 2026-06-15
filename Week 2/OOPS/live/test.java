package live.test;

import music.Playable;
import music.string;
import music.wind;

public class test{
    public Static void main(String[]args){
        Veena v=new Veena;
        v.play();
        Saxophone s=new Saxophone;
        s.play();

        Playable p;
        p=new Veena;
        p.play();

        p=new Saxophone;
        p.play();
    }
}