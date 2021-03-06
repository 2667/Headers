//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIntegrateTabBarController.h"

#import "MovieSDKTabBarOverlayDelegate-Protocol.h"

@class MovieSDKTabBarOverlay, NSString;
@protocol MovieSDKTabBarControllerDelegate;

@interface MovieSDKTabBarController : WBIntegrateTabBarController <MovieSDKTabBarOverlayDelegate>
{
    MovieSDKTabBarOverlay *tabBarOverlay;
    double tabBarHeight;
    unsigned long long lastSelectedIndex;
    _Bool programmaticIndexChange;
    id <MovieSDKTabBarControllerDelegate> _movieDelegate;
}

@property(nonatomic) __weak id <MovieSDKTabBarControllerDelegate> movieDelegate; // @synthesize movieDelegate=_movieDelegate;
@property(readonly, nonatomic) _Bool programmaticIndexChange; // @synthesize programmaticIndexChange;
@property(readonly, nonatomic) unsigned long long lastSelectedIndex; // @synthesize lastSelectedIndex;
@property(nonatomic) double tabBarHeight; // @synthesize tabBarHeight;
@property(readonly, nonatomic) MovieSDKTabBarOverlay *tabBarOverlay; // @synthesize tabBarOverlay;
- (void).cxx_destruct;
- (void)tabBarOverlay:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (_Bool)tabBarOverlay:(id)arg1 shouldSelectAtIndex:(unsigned long long)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)tabBarItems;
- (void)commitItemChanges;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (double)defaultTabBarHeight;
- (void)viewDidUnload;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupTabBarOverlay;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

