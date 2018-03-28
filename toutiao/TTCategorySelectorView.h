//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "CategorySelectorButtonDelegate-Protocol.h"
#import "TTCategoryBadgeNumberManagerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, CALayer, CategorySelectorButton, NSArray, NSMutableArray, NSMutableOrderedSet, NSString, SSThemedImageView, TTAlphaThemedButton, TTBadgeNumberView, TTCategory, UIScrollView;
@protocol TTCategorySelectorViewDelegate;

@interface TTCategorySelectorView : SSThemedView <UIScrollViewDelegate, CategorySelectorButtonDelegate, TTCategoryBadgeNumberManagerDelegate>
{
    id <TTCategorySelectorViewDelegate> _delegate;
    TTAlphaThemedButton *_expandButton;
    TTAlphaThemedButton *_searchButton;
    SSThemedImageView *_rightBorderIndicatorView;
    TTCategory *_currentSelectedCategory;
    NSArray *_categories;
    UIScrollView *_scrollView;
    CategorySelectorButton *_lastSelectedButton;
    NSMutableArray *_categoryViews;
    long long _style;
    long long _tabType;
    TTBadgeNumberView *_hasNewCategoryBadgeView;
    NSString *_cacheNewCategoryID;
    SSThemedView *_bottomLineView;
    double _lastContentOffset;
    NSMutableOrderedSet *_categoryClickAutoDismissBadgeSet;
    CALayer *_rightBackLayer;
    CAGradientLayer *_rightGradientLayer;
}

+ (void)trackTipsWithLabel:(id)arg1 position:(id)arg2 style:(id)arg3 categoryID:(id)arg4;
+ (void)trackTipsWithLabel:(id)arg1 position:(id)arg2 style:(id)arg3;
+ (double)channelSelectedFontSizeWithStyle:(long long)arg1 tabType:(long long)arg2;
+ (double)channelFontSizeWithStyle:(long long)arg1 tabType:(long long)arg2;
@property(retain, nonatomic) CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(retain, nonatomic) CALayer *rightBackLayer; // @synthesize rightBackLayer=_rightBackLayer;
@property(retain, nonatomic) NSMutableOrderedSet *categoryClickAutoDismissBadgeSet; // @synthesize categoryClickAutoDismissBadgeSet=_categoryClickAutoDismissBadgeSet;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) NSString *cacheNewCategoryID; // @synthesize cacheNewCategoryID=_cacheNewCategoryID;
@property(retain, nonatomic) TTBadgeNumberView *hasNewCategoryBadgeView; // @synthesize hasNewCategoryBadgeView=_hasNewCategoryBadgeView;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *categoryViews; // @synthesize categoryViews=_categoryViews;
@property(retain, nonatomic) CategorySelectorButton *lastSelectedButton; // @synthesize lastSelectedButton=_lastSelectedButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) TTCategory *currentSelectedCategory; // @synthesize currentSelectedCategory=_currentSelectedCategory;
@property(retain, nonatomic) SSThemedImageView *rightBorderIndicatorView; // @synthesize rightBorderIndicatorView=_rightBorderIndicatorView;
@property(retain, nonatomic) TTAlphaThemedButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) TTAlphaThemedButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) __weak id <TTCategorySelectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCategoryInFirstScreen:(id)arg1 withCategoryID:(id)arg2;
- (void)categoryBadgeNumberDidChange:(id)arg1 categoryID:(id)arg2 hasNotifyPoint:(_Bool)arg3 badgeNumber:(unsigned long long)arg4;
- (void)removeClickAutoDismissBadges;
- (id)categorySelectorButtonByCategoryId:(id)arg1;
- (_Bool)isCategoryShowBadge:(id)arg1;
- (_Bool)isCategoryInFirstScreen:(id)arg1;
- (_Bool)isCategoryVisible:(id)arg1;
- (void)showCategoryGuide:(id)arg1;
- (void)fetchFeedRefreshADImages:(id)arg1;
- (void)handleInsertCategoryIntoLastVisiblePosition:(id)arg1;
- (void)showTipNewBadge:(_Bool)arg1 categoryID:(id)arg2;
- (void)changeHasNewCategoryBadge:(id)arg1;
- (void)trackFlipEvent:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)moveSelectFrameFromIndex:(long long)arg1 toIndex:(long long)arg2 percentage:(double)arg3;
- (void)refreshChannelButtonUI;
- (float)categoryButtonOffsetY;
- (void)refreshBorderIndicator;
- (void)setButtonHighlightColor:(id)arg1;
- (void)setButtonNormalColor:(id)arg1;
- (void)refreshSelectorView;
- (void)refreshWithCategories:(id)arg1;
- (void)categoryRefresh:(id)arg1;
- (void)searchButtonClicked:(id)arg1;
- (void)expandButtonClicked:(id)arg1;
- (void)updateSelectButton:(id)arg1;
- (void)scrollToCategory:(id)arg1;
- (void)showDialogWhenChangeFeedTabCategory;
- (void)selectCategory:(id)arg1;
- (void)categoryClicked:(id)arg1;
- (void)categoryTipNewChangedOfCategoryID:(id)arg1 withTipNew:(_Bool)arg2;
- (double)marginBetweenVisibleLabelAndButton;
- (void)buttonTapped:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)categoryViewWillHidden:(id)arg1;
- (void)changeCategory:(id)arg1;
- (void)refreshExpandButton:(id)arg1;
- (id)categoryId;
- (void)hideExpandButton;
- (void)didDoLayoutSubViews;
- (void)layoutSubviews;
- (void)setBottomLineFrame;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 tabType:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
