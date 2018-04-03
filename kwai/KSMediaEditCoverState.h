//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWState.h"

@class NSString, UIImage;
@protocol KSChartlet;

@interface KSMediaEditCoverState : LYWState
{
    float _sliderOffset;
    id <KSChartlet> _chartletItem;
    long long _coverVersion;
    UIImage *_coverImage;
    NSString *_coverText;
    NSString *_coverTextStyle;
}

+ (long long)generateCoverVersion;
@property(nonatomic) float sliderOffset; // @synthesize sliderOffset=_sliderOffset;
@property(retain, nonatomic) NSString *coverTextStyle; // @synthesize coverTextStyle=_coverTextStyle;
@property(retain, nonatomic) NSString *coverText; // @synthesize coverText=_coverText;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) long long coverVersion; // @synthesize coverVersion=_coverVersion;
@property(retain, nonatomic) id <KSChartlet> chartletItem; // @synthesize chartletItem=_chartletItem;
- (void).cxx_destruct;
- (void)restoreFromSnapshot:(id)arg1;
- (id)makeSnapshot;

@end

