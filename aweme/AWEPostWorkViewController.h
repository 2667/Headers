//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPreviewable-Protocol.h"
#import "AWEVideosCollectionViewAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEUserPostsDataManager, NSString, UICollectionView, UILabel;
@protocol AWEUserWorkViewControllerDelegate;

@interface AWEPostWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEPreviewable, AWEVideosCollectionViewAnimationDelegate>
{
    _Bool _isCurrentUser;
    _Bool _fromHome;
    _Bool _initialLoadMoreEnabled;
    UICollectionView *_collectionView;
    NSString *_userID;
    NSString *_originEntryEnterMethod;
    id <AWEUserWorkViewControllerDelegate> _delegate;
    UILabel *_emptyLabel;
    AWEUserPostsDataManager *_dataManager;
}

@property(retain, nonatomic) AWEUserPostsDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(nonatomic) _Bool initialLoadMoreEnabled; // @synthesize initialLoadMoreEnabled=_initialLoadMoreEnabled;
@property(nonatomic) __weak id <AWEUserWorkViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *originEntryEnterMethod; // @synthesize originEntryEnterMethod=_originEntryEnterMethod;
@property(nonatomic) _Bool fromHome; // @synthesize fromHome=_fromHome;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)transitionViewForOffset:(long long)arg1;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_endRefreshing;
- (void)_loadMoreData;
- (void)updateEmptyLabelPosition;
- (void)_refreshData;
- (void)refreshData;
- (void)reloadCollectionHeader;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

