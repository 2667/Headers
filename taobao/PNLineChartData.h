//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PNLineChartDataItem, UIColor;

@interface PNLineChartData : NSObject
{
    UIColor *_color;
    UIColor *_fillColor;
    double _alpha;
    PNLineChartDataItem *_starItem;
    unsigned long long _itemCount;
    CDUnknownBlockType _getData;
    unsigned long long _inflexionPointStyle;
    double _inflexionPointWidth;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double inflexionPointWidth; // @synthesize inflexionPointWidth=_inflexionPointWidth;
@property(nonatomic) unsigned long long inflexionPointStyle; // @synthesize inflexionPointStyle=_inflexionPointStyle;
@property(copy) CDUnknownBlockType getData; // @synthesize getData=_getData;
@property unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) PNLineChartDataItem *starItem; // @synthesize starItem=_starItem;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setupDefaultValues;
- (id)init;

@end
