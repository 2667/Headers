//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZRichTextItem.h>

@class UIColor;

@interface QZShimmeringItem : QZRichTextItem
{
    float _shimmeringCount;
    UIColor *_shimmeringColor;
}

@property(retain, nonatomic) UIColor *shimmeringColor; // @synthesize shimmeringColor=_shimmeringColor;
@property(nonatomic) float shimmeringCount; // @synthesize shimmeringCount=_shimmeringCount;
- (void).cxx_destruct;
- (struct CGSize)computeSizeWithStraintSize:(struct CGSize)arg1;
- (_Bool)isFont:(id)arg1 equalToFont:(id)arg2;
- (void)configView:(id)arg1 context:(id)arg2;
- (id)createView;

@end
