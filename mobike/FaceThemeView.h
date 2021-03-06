//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FaceThemeModel, NSArray, NSString, UICollectionView, UIPageControl;

@interface FaceThemeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    FaceThemeModel *_themeModel;
    NSArray *_pageFaceArray;
}

@property(retain, nonatomic) NSArray *pageFaceArray; // @synthesize pageFaceArray=_pageFaceArray;
@property(retain, nonatomic) FaceThemeModel *themeModel; // @synthesize themeModel=_themeModel;
- (void).cxx_destruct;
- (void)initSubViews;
- (long long)numbersOfPerPage:(id)arg1;
- (void)loadFaceTheme:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

