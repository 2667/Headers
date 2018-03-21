//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, RPDisplayInfo, UIImage;

@interface RedPointShowInfo : NSObject
{
    NSString *_iconUrl;
    UIImage *_iconUinImage;
    long long _mod_timestamp;
    long long _icon_flag;
    long long _icon_type;
    NSString *_hintWord;
    NSArray *_displayInfos;
    RPDisplayInfo *_tabDisplayInfo;
    NSString *_iconUin;
    int _xo;
    _Bool _isShowRedPoint;
    int _hintType;
    unsigned int _lastTime;
    long long _rpNumber;
}

@property(nonatomic) unsigned int lastTime; // @synthesize lastTime=_lastTime;
@property _Bool isShowRedPoint; // @synthesize isShowRedPoint=_isShowRedPoint;
@property long long rpNumber; // @synthesize rpNumber=_rpNumber;
@property int hintType; // @synthesize hintType=_hintType;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSArray *displayInfos; // @dynamic displayInfos;
@property(retain, nonatomic) NSString *hintWord; // @dynamic hintWord;
@property(retain, nonatomic) NSString *iconUin; // @dynamic iconUin;
@property(retain, nonatomic) UIImage *iconUinImage; // @dynamic iconUinImage;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) long long icon_flag; // @dynamic icon_flag;
@property(nonatomic) long long icon_type; // @dynamic icon_type;
@property(nonatomic) long long mod_timestamp; // @dynamic mod_timestamp;
@property(retain, nonatomic) RPDisplayInfo *tabDisplayInfo; // @dynamic tabDisplayInfo;

@end
