//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBSNSCardListDelegate-Protocol.h"
#import "TBSNSHotWordViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSString, TBSNSHotWordView, TBSNSListNetService, TBSNSShopSearchCardListController, TBSearchBar, UIButton;

@interface TBSNSShopSearchView : UIView <UISearchBarDelegate, TBSNSCardListDelegate, TBSNSHotWordViewDelegate>
{
    float _topStart;
    TBSearchBar *_searchBar;
    UIView *_headerView;
    TBSNSHotWordView *_hotWordView;
    UIButton *_cancelBtn;
    UIButton *_scanBtn;
    TBSNSShopSearchCardListController *_cardListVC;
    TBSNSListNetService *_hotWordService;
    NSArray *_hotWordItems;
    NSString *_hotWordCacheKey;
}

@property(nonatomic) float topStart; // @synthesize topStart=_topStart;
@property(retain, nonatomic) NSString *hotWordCacheKey; // @synthesize hotWordCacheKey=_hotWordCacheKey;
@property(retain, nonatomic) NSArray *hotWordItems; // @synthesize hotWordItems=_hotWordItems;
@property(retain, nonatomic) TBSNSListNetService *hotWordService; // @synthesize hotWordService=_hotWordService;
@property(retain, nonatomic) TBSNSShopSearchCardListController *cardListVC; // @synthesize cardListVC=_cardListVC;
@property(retain, nonatomic) UIButton *scanBtn; // @synthesize scanBtn=_scanBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) TBSNSHotWordView *hotWordView; // @synthesize hotWordView=_hotWordView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollEventForCardList:(id)arg1 withContentOffset:(struct CGPoint)arg2;
- (void)hotWordSelect:(id)arg1 atIndex:(long long)arg2;
- (void)doSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doScan:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)getHotWords;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

