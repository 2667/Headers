//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;

@interface MPTWBLvJingView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    _Bool _isShow;
    CDUnknownBlockType _MPTWBLvJingViewBlock;
    CDUnknownBlockType _MPTWBLvJingViewGuanBiBlock;
    UICollectionView *_collectV;
    NSArray *_aryDataBendi;
    NSString *_strfolder_name;
}

@property(retain, nonatomic) NSString *strfolder_name; // @synthesize strfolder_name=_strfolder_name;
@property(retain, nonatomic) NSArray *aryDataBendi; // @synthesize aryDataBendi=_aryDataBendi;
@property(retain, nonatomic) UICollectionView *collectV; // @synthesize collectV=_collectV;
@property(copy, nonatomic) CDUnknownBlockType MPTWBLvJingViewGuanBiBlock; // @synthesize MPTWBLvJingViewGuanBiBlock=_MPTWBLvJingViewGuanBiBlock;
@property(copy, nonatomic) CDUnknownBlockType MPTWBLvJingViewBlock; // @synthesize MPTWBLvJingViewBlock=_MPTWBLvJingViewBlock;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)btnBackClicked:(id)arg1;
- (void)show:(_Bool)arg1;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

