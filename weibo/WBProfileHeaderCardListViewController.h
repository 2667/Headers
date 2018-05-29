//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

@class NSString, UIViewController;
@protocol WBProfileHeaderCardListDelegate;

@interface WBProfileHeaderCardListViewController : WBCardListViewController
{
    NSString *sectionTitle;
    _Bool _needAdjustCellWidth;
    UIViewController<WBProfileHeaderCardListDelegate> *_baseViewController;
}

@property(nonatomic) _Bool needAdjustCellWidth; // @synthesize needAdjustCellWidth=_needAdjustCellWidth;
@property(nonatomic) __weak UIViewController<WBProfileHeaderCardListDelegate> *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void).cxx_destruct;
- (void)cellDidFinishReplaceTheOldBubbleView:(id)arg1;
- (void)cellWillBeginReplaceTheOldBubbleView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setCards:(id)arg1 title:(id)arg2;
- (void)setCards:(id)arg1;
- (void)reloadViews;
- (id)tabBarController;
- (id)navigationController;
- (id)parentViewController;
- (void)didReceiveMemoryWarning;
- (_Bool)supportPrl;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)sectionTitle;

@end

