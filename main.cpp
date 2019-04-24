#include <iostream>
#include <list>

int main()
{
    // 目次
    // 1. リスト
    // 2. 配列
    // 3. スタック
    // 4. キュー
    // 5. ハッシュテーブル
    // 6. ヒープ
    // 7. 2分探索木

    //// リスト（双方向性） ////
    // データを一直線に並べた構造を持っている。データの追加や削除がしやすい反面，アクセスに時間がかかる。（線形探索）
    // 計算時間：O(n)
    // データの追加：O(1) -> データに既にアクセスしている前提。
    // データの削除：O(1) -> データに既にアクセスしている前提。

    std::list<int> lst;
    for (int i = 0, n = 10; i < n; ++i)
    {
        lst.push_back(i);
    }

    for (auto itr = lst.begin(); itr != lst.end(); ++itr)
    {
        if (*itr == 3)
        {
            itr = lst.insert(itr, 0);
            ++itr;
        }
    }

    for (auto itr = lst.begin(); itr != lst.end(); ++itr)
    {
        std::cout << *itr << std::endl;
    }

    //// 配列 ////
    //
    int hairetu[2];

    //// スタック ////
    //

    //// キュー ////
    //

    //// ハッシュテーブル ////
    //


    //// ヒープ ////
    //

    //// 2分探索木 ////
    //
}