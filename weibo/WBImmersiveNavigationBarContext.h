//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIBarButtonItem, UINavigationController, UINavigationItem, WBTableViewController;
@protocol WBImmersiveNavigationBarContextDelegate;

@interface WBImmersiveNavigationBarContext : NSObject
{
    _Bool _isTranslucentBg;
    _Bool _isWhiteTitleViews;
    _Bool _currentTanslucentBg;
    WBTableViewController<WBImmersiveNavigationBarContextDelegate> *_viewController;
    UIBarButtonItem *_rightBarButtonItemInNormalState;
    double _currentBgAlpha;
    UINavigationController *_navigationController;
    UINavigationItem *_navigationItem;
}

+ (id)contextWithViewController:(id)arg1;
@property(nonatomic) __weak UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) double currentBgAlpha; // @synthesize currentBgAlpha=_currentBgAlpha;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItemInNormalState; // @synthesize rightBarButtonItemInNormalState=_rightBarButtonItemInNormalState;
@property(nonatomic) __weak WBTableViewController<WBImmersiveNavigationBarContextDelegate> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool currentTanslucentBg; // @synthesize currentTanslucentBg=_currentTanslucentBg;
@property(nonatomic) _Bool isWhiteTitleViews; // @synthesize isWhiteTitleViews=_isWhiteTitleViews;
@property(nonatomic) _Bool isTranslucentBg; // @synthesize isTranslucentBg=_isTranslucentBg;
- (void).cxx_destruct;
- (void)refreshNavAndStatusBarStyle;
- (void)p_configTitleViews:(_Bool)arg1;
- (void)p_changeTitleViewsAlpha:(double)arg1;
- (void)doForScrollViewDidEndDecelerating:(id)arg1;
- (void)doForScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)doForScrollViewDidScroll:(id)arg1;
- (void)doForViewWillDisappear:(_Bool)arg1;
- (void)doForViewDidAppear:(_Bool)arg1;
- (void)doForViewWillAppear:(_Bool)arg1;
- (void)dealloc;

@end

