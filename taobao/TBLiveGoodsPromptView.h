//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveBaseView.h"

@class NSString, UIImageView, UILabel;

@interface TBLiveGoodsPromptView : TBLiveBaseView
{
    UIImageView *_backageView;
    UILabel *_itemLabel;
    double _topMargin;
    NSString *_itemName;
}

@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UIImageView *backageView; // @synthesize backageView=_backageView;
- (void).cxx_destruct;
- (void)refreshWithData:(id)arg1;
- (void)updateLayoutConstraints;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

