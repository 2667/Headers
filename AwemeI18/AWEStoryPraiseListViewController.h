//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEStoryCommentTransitionManager, AWEStoryPraiseListCollectionView, NSArray, NSString, UIImageView, UIView;

@interface AWEStoryPraiseListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSString *_itemID;
    NSString *_itemAuthorID;
    NSArray *_dataList;
    AWEStoryCommentTransitionManager *_transitionManager;
    AWEStoryPraiseListCollectionView *_collectionView;
    UIView *_sepView;
    UIImageView *_praiseView;
}

@property(retain, nonatomic) UIImageView *praiseView; // @synthesize praiseView=_praiseView;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) AWEStoryPraiseListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AWEStoryCommentTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(copy, nonatomic) NSString *itemAuthorID; // @synthesize itemAuthorID=_itemAuthorID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

