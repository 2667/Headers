//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AWEIMPrivacySettingModel : NSObject
{
    _Bool _isOn;
    long long _type;
    CDUnknownBlockType _switchBlock;
    CDUnknownBlockType _selectCellBlock;
    NSString *_tip;
    NSString *_selectTip;
}

@property(copy, nonatomic) NSString *selectTip; // @synthesize selectTip=_selectTip;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) CDUnknownBlockType selectCellBlock; // @synthesize selectCellBlock=_selectCellBlock;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

