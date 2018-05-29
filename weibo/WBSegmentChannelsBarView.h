//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, WBSegmentChannelsBarMoreButton, WBSlideGradientColorView;
@protocol WBSegmentChannelsBarViewDelegate;

@interface WBSegmentChannelsBarView : UIView <UIScrollViewDelegate>
{
    _Bool _isNavigateMode;
    _Bool _bounces;
    _Bool _showNavCloseButton;
    _Bool _indexManuallyChanged;
    _Bool _needScroll;
    _Bool _isFirstLoaded;
    NSMutableArray *_channelButtons;
    unsigned long long _barState;
    NSArray *_channelModels;
    id <WBSegmentChannelsBarViewDelegate> _delegate;
    long long _selectedIndex;
    WBSegmentChannelsBarMoreButton *_moreButton;
    long long _willSelectIndex;
    double _slideBarOutsideSpace;
    WBSlideGradientColorView *_slider;
    UIButton *_currentClickedButton;
    UIImageView *_barButtonsShadow;
    UIImageView *_barButtonsShasowLeft;
    UIImageView *_backgroundView;
    UIImageView *_lineShadow;
    UIButton *_sortButton;
    UILabel *_myChannelLabel;
    UIView *_moreBar;
    UIImageView *_moreBarBackgroundView;
    UIScrollView *_scrollPannel;
    UIButton *_navigationButton;
    NSArray *_sliderColorArray;
    unsigned long long _defaultIndex;
    struct UIEdgeInsets _scrollContentInsets;
}

+ (id)segmentChannelsViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *sliderColorArray; // @synthesize sliderColorArray=_sliderColorArray;
@property(retain, nonatomic) UIButton *navigationButton; // @synthesize navigationButton=_navigationButton;
@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(nonatomic) _Bool needScroll; // @synthesize needScroll=_needScroll;
@property(retain, nonatomic) UIScrollView *scrollPannel; // @synthesize scrollPannel=_scrollPannel;
@property(retain, nonatomic) UIImageView *moreBarBackgroundView; // @synthesize moreBarBackgroundView=_moreBarBackgroundView;
@property(retain, nonatomic) UIView *moreBar; // @synthesize moreBar=_moreBar;
@property(retain, nonatomic) UILabel *myChannelLabel; // @synthesize myChannelLabel=_myChannelLabel;
@property(retain, nonatomic) UIButton *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) UIImageView *lineShadow; // @synthesize lineShadow=_lineShadow;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *barButtonsShasowLeft; // @synthesize barButtonsShasowLeft=_barButtonsShasowLeft;
@property(retain, nonatomic) UIImageView *barButtonsShadow; // @synthesize barButtonsShadow=_barButtonsShadow;
@property(nonatomic) __weak UIButton *currentClickedButton; // @synthesize currentClickedButton=_currentClickedButton;
@property(retain, nonatomic) WBSlideGradientColorView *slider; // @synthesize slider=_slider;
@property(nonatomic) _Bool indexManuallyChanged; // @synthesize indexManuallyChanged=_indexManuallyChanged;
@property(nonatomic) _Bool showNavCloseButton; // @synthesize showNavCloseButton=_showNavCloseButton;
@property(nonatomic) _Bool isNavigateMode; // @synthesize isNavigateMode=_isNavigateMode;
@property(nonatomic) double slideBarOutsideSpace; // @synthesize slideBarOutsideSpace=_slideBarOutsideSpace;
@property(nonatomic) struct UIEdgeInsets scrollContentInsets; // @synthesize scrollContentInsets=_scrollContentInsets;
@property(nonatomic) long long willSelectIndex; // @synthesize willSelectIndex=_willSelectIndex;
@property(retain, nonatomic) WBSegmentChannelsBarMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WBSegmentChannelsBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *channelModels; // @synthesize channelModels=_channelModels;
@property(nonatomic) unsigned long long barState; // @synthesize barState=_barState;
@property(retain, nonatomic) NSMutableArray *channelButtons; // @synthesize channelButtons=_channelButtons;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showBarShadowImageIfNeeded;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)changeMoreButtonState;
- (void)moreButtonClick:(id)arg1;
- (void)sortButtonClick:(id)arg1;
- (void)setupMoreBar;
- (void)setUpNavigationMoreBar;
- (void)selectChannelAtIndex:(long long)arg1;
- (void)scrollCurrentButtonToCenter:(id)arg1;
- (void)moveSlideBarToIndex:(unsigned long long)arg1 scrollOffset:(double)arg2 animation:(_Bool)arg3;
- (void)moveSlideBarToIndex:(unsigned long long)arg1 byOffset:(double)arg2;
- (void)moveSliderToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)channelButtonClick:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (void)setupChannelButtons:(unsigned long long)arg1;
- (void)setChannelModels:(id)arg1 defaultIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)resetButtonsChannelModels:(id)arg1;
- (double)barItemTitleFontSize;
- (void)navigationButtonPressed:(id)arg1;
- (void)resetNavigationButtonIfNeeded;
- (id)getColorFromHexString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

