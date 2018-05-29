//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WBGridViewDataSource-Protocol.h"
#import "WBGridViewDelegate-Protocol.h"
#import "WBGroupContactCellDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UIImageView, UIView, WBCardViewBubbleView, WBContactEngine, WBFeedGroup, WBGridView, WBIndicatorView, WBSearchBar;

@interface WBFriendGroupViewController : WBCardListViewController <UISearchBarDelegate, UIScrollViewDelegate, WBGridViewDataSource, WBGridViewDelegate, WBGroupContactCellDelegate, UIGestureRecognizerDelegate>
{
    NSDictionary *groupInfo;
    NSString *groupID;
    WBFeedGroup *feedGroup;
    WBCardViewBubbleView *bubbleView;
    WBGridView *memberGridView;
    _Bool isShowingAll;
    _Bool editing;
    long long gridViewItemDidRemovedCount;
    WBContactEngine *contactEngine;
    WBIndicatorView *indicatorView;
    UIBarButtonItem *indicatorItem;
    int currentLevel;
    UIView *headerView;
    UIImageView *searchBarContainer;
    WBSearchBar *searchBar;
    UIView *headBackgroundView;
    NSMutableArray *_contacts;
    NSMutableArray *_uidArray;
}

@property(retain, nonatomic) NSMutableArray *uidArray; // @synthesize uidArray=_uidArray;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) UIView *headBackgroundView; // @synthesize headBackgroundView;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) WBFeedGroup *feedGroup; // @synthesize feedGroup;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) NSDictionary *groupInfo; // @synthesize groupInfo;
- (void).cxx_destruct;
- (void)resetCurrentLevel;
- (void)increaseCurrentLevel;
- (id)removeExpandedContacts:(id)arg1 toMeetTheMaxCapacity:(long long)arg2;
- (long long)maxCapacityForCurrenLevel;
- (long long)maxCellsPerRow;
- (void)removeContactNetRequest:(id)arg1;
- (void)deleteCellWithContact:(id)arg1;
- (void)selectCellWithContact:(id)arg1;
- (struct UIEdgeInsets)gridViewContentInsets;
- (struct CGSize)portraitGridCellSizeForGridView:(id)arg1;
- (id)gridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)gridView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInGridView:(id)arg1;
- (void)configCell:(id)arg1 forItemIndex:(long long)arg2;
- (struct CGRect)gridViewVisibleBounds:(id)arg1;
- (void)gridViewDidEndUpdateAnimation:(id)arg1;
- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGRect)gridView:(id)arg1 adjustCellFrame:(struct CGRect)arg2 withinGridCellFrame:(struct CGRect)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)contactEngineGroupContactCountDidChangeNotification:(id)arg1;
- (void)didSelectCard:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)supportPullRefrash;
- (_Bool)isNeedEdgeInset;
- (id)apiPathForPageEngine:(id)arg1;
- (_Bool)cacheForEngine:(id)arg1;
- (Class)modelClassForPageEngine:(id)arg1;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1;
- (void)refreshContactGroup;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)rightButtonClicked;
- (void)configRightBarButtonItem;
- (void)configWithGroupInfo;
- (void)removeContact:(id)arg1;
- (void)refreshContactsView;
- (void)adjustHeaderViewFrame;
- (void)reloadContactsView;
- (void)refetchContactsForCurrentLevel;
- (void)reloadContacts;
- (void)refresh;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)configSubviewsFrame;
- (void)viewWillLayoutSubviews;
- (void)initHeaderView;
- (void)cleanUIDArray;
- (void)refreshContactsWithUIDS:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isFirstDeleteContact;
- (void)setTitle:(id)arg1;
- (void)configEngine:(id)arg1;
- (id)initWithID:(id)arg1 isFriendGroup:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

