//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSNumber;

@interface WBStorySettings : WBModelObject
{
    _Bool _saveEnable;
    NSNumber *_hideUserCount;
    long long _interactType;
    long long _interactUserType;
    NSNumber *_allowShare;
    NSNumber *_autoShare;
}

+ (id)loadSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)defaultSettings;
@property(nonatomic) _Bool saveEnable; // @synthesize saveEnable=_saveEnable;
@property(nonatomic) NSNumber *autoShare; // @synthesize autoShare=_autoShare;
@property(nonatomic) NSNumber *allowShare; // @synthesize allowShare=_allowShare;
@property(nonatomic) long long interactUserType; // @synthesize interactUserType=_interactUserType;
@property(nonatomic) long long interactType; // @synthesize interactType=_interactType;
@property(retain, nonatomic) NSNumber *hideUserCount; // @synthesize hideUserCount=_hideUserCount;
- (void).cxx_destruct;
- (id)dictForUpload;
- (id)dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)init;

@end

