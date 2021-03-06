//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MovieSDKMovieSelectionViewDelegate><UICollectionViewDelegateFlowLayout;

@interface MovieSDKMovieSelectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MovieSDKMovieSelectionViewDelegate><UICollectionViewDelegateFlowLayout> _delegate;
    UICollectionView *_collectionView;
    NSArray *_data;
    Class _cellCls;
    NSString *_cellClsReuseId;
    UICollectionViewFlowLayout *_layout;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) NSString *cellClsReuseId; // @synthesize cellClsReuseId=_cellClsReuseId;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) Class cellCls; // @synthesize cellCls=_cellCls;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MovieSDKMovieSelectionViewDelegate><UICollectionViewDelegateFlowLayout> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)selectItemByIndex:(long long)arg1;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 cellCls:(Class)arg2 inset:(struct UIEdgeInsets)arg3 padding:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 cellCls:(Class)arg2 cellSize:(struct CGSize)arg3 inset:(struct UIEdgeInsets)arg4 padding:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

