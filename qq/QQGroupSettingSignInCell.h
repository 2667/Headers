//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupSettingViewCell.h>

@class NSArray, NSMutableArray, UIImageView;

@interface QQGroupSettingSignInCell : QQGroupSettingViewCell
{
    UIImageView *_iconImageView;
    NSMutableArray *_imageViewArr;
    int _picCount;
    NSArray *_picArr;
}

+ (double)calculateSignInCellHeight;
@property(retain, nonatomic) NSArray *picArr; // @synthesize picArr=_picArr;
@property(nonatomic) int picCount; // @synthesize picCount=_picCount;
- (void)layoutSubviews;
- (void)setupInfoModle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
