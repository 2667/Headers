//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQVisualEffectView, UIButton, UICollectionView, UITableView;
@protocol MemRankInfoBoardDelegate;

@interface GrpVideoMemRankInfoBoard : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UICollectionView *_collectionView;
    UIView *_topBarView;
    UIView *_tipView;
    NSMutableArray *_BestMemInfoArr;
    unsigned long long _groupCode;
    _Bool _isPreSelect;
    int _xo;
    struct CGPoint rankImgCenter;
    _Bool isSelectTabButt;
    UITableView *_bestTableView;
    UITableView *_onlineTableView;
    QQVisualEffectView *_visualView;
    _Bool _isBestChange;
    _Bool _isOnlineChange;
    UIButton *bestButt;
    UIButton *rankButt;
    UIView *_catagroryIndicatorView;
    UIView *_sepLine;
    id <MemRankInfoBoardDelegate> _delegate;
}

@property(nonatomic) id <MemRankInfoBoardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)dismissPersonalBestInfoTip;
- (void)showPersonalBestInfoTip:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preShowBest;
- (void)preShowRank;
- (void)showRank;
- (void)showBest;
- (void)refreshGiftSendRankTable:(id)arg1;
- (id)getSectionButtonWithIndex:(long long)arg1 title:(id)arg2;
- (void)configPageControl;
- (void)configCollectionView;
- (void)reloadBestTable;
- (void)reloadOnlineTable;
- (void)configData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *BestMemInfoArr; // @dynamic BestMemInfoArr;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPreSelect; // @dynamic isPreSelect;
@property(readonly) Class superclass;

@end

