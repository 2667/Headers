//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCollectionView.h"

@class KSLoadingMoreCollectionViewCell, KSLoadingView, KSMessageView, NSArray, UIActivityIndicatorView, UIControl;
@protocol KSRefreshControl;

@interface KSRefreshableCollectionView : KSCollectionView
{
    _Bool _isUpdatingCollectionView;
    _Bool _fullReloadOnly;
    KSMessageView *_messageView;
    UIControl<KSRefreshControl> *_ks_refreshControl;
    KSLoadingMoreCollectionViewCell *_loadingMoreCollectionViewCell;
    KSLoadingView *_loadingView;
    double _lastContentHeight;
    UIActivityIndicatorView *_indicatorView;
    NSArray *_currentVisiableCells;
}

@property(retain, nonatomic) NSArray *currentVisiableCells; // @synthesize currentVisiableCells=_currentVisiableCells;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) double lastContentHeight; // @synthesize lastContentHeight=_lastContentHeight;
@property(nonatomic) _Bool fullReloadOnly; // @synthesize fullReloadOnly=_fullReloadOnly;
@property(retain, nonatomic) KSLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) _Bool isUpdatingCollectionView; // @synthesize isUpdatingCollectionView=_isUpdatingCollectionView;
@property(retain, nonatomic) KSLoadingMoreCollectionViewCell *loadingMoreCollectionViewCell; // @synthesize loadingMoreCollectionViewCell=_loadingMoreCollectionViewCell;
@property(retain, nonatomic) UIControl<KSRefreshControl> *ks_refreshControl; // @synthesize ks_refreshControl=_ks_refreshControl;
- (void).cxx_destruct;
- (void)setupUI;
@property(retain, nonatomic) KSMessageView *messageView; // @synthesize messageView=_messageView;
- (void)loadMoreWithItemCount:(long long)arg1;
- (void)reloadAndSpringBack:(_Bool)arg1 OnFinish:(CDUnknownBlockType)arg2;
- (void)hiddenLoading;
- (void)showLoading;
- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

