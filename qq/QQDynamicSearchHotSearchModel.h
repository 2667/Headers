//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQDynamicSearchHotSearchModel : QQModel
{
    unsigned long long _showType;
    NSString *_imgUrl;
    NSString *_title;
    NSString *_detailText;
    NSString *_jumpUrl;
    NSString *_numberTextColor;
    NSString *_numberBackgroundColor;
    NSString *_imgBgUrl;
    int _xo;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *detailText; // @dynamic detailText;
@property(copy, nonatomic) NSString *imgBgUrl; // @dynamic imgBgUrl;
@property(copy, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(copy, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(copy, nonatomic) NSString *numberBackgroundColor; // @dynamic numberBackgroundColor;
@property(copy, nonatomic) NSString *numberTextColor; // @dynamic numberTextColor;
@property(nonatomic) unsigned long long showType; // @dynamic showType;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

