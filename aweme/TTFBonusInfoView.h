//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFQuizShowLiveRoomViewModel, UIImageView, UILabel;

@interface TTFBonusInfoView : UIView
{
    UIImageView *_bgImageView;
    UILabel *_totalBonusDscLabel;
    UILabel *_totalBonusLabel;
    UILabel *_personalBonusDscLabel;
    UILabel *_personalBonusLabel;
    UILabel *_teamDscLabel;
    UILabel *_teamBonusLabel;
    UILabel *_easterEggBonusDscLabel;
    UILabel *_easterEggBonusLabel;
    TTFQuizShowLiveRoomViewModel *_viewModel;
}

@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *easterEggBonusLabel; // @synthesize easterEggBonusLabel=_easterEggBonusLabel;
@property(retain, nonatomic) UILabel *easterEggBonusDscLabel; // @synthesize easterEggBonusDscLabel=_easterEggBonusDscLabel;
@property(retain, nonatomic) UILabel *teamBonusLabel; // @synthesize teamBonusLabel=_teamBonusLabel;
@property(retain, nonatomic) UILabel *teamDscLabel; // @synthesize teamDscLabel=_teamDscLabel;
@property(retain, nonatomic) UILabel *personalBonusLabel; // @synthesize personalBonusLabel=_personalBonusLabel;
@property(retain, nonatomic) UILabel *personalBonusDscLabel; // @synthesize personalBonusDscLabel=_personalBonusDscLabel;
@property(retain, nonatomic) UILabel *totalBonusLabel; // @synthesize totalBonusLabel=_totalBonusLabel;
@property(retain, nonatomic) UILabel *totalBonusDscLabel; // @synthesize totalBonusDscLabel=_totalBonusDscLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (id)ttf_formatPrize:(long long)arg1 fontSize:(double)arg2;
- (void)layoutSubviews;
- (void)initUIComponent;
- (id)initWithFrame:(struct CGRect)arg1;

@end
