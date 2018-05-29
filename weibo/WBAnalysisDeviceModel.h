//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBLogDBStorageModel.h"

@class NSData, NSNumber, NSString;

@interface WBAnalysisDeviceModel : WBLogDBStorageModel
{
    NSData *_data;
    NSNumber *_level;
    NSNumber *_timestamp;
    NSString *_uid;
    NSString *_type;
    NSString *_cached_text;
}

+ (id)_generated_database_path;
+ (void)initializeFields;
+ (id)currentTypes;
+ (id)dbManager;
+ (id)modelWithText:(id)arg1 andLogInfo:(id)arg2;
@property(retain) NSString *cached_text; // @synthesize cached_text=_cached_text;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSNumber *level; // @synthesize level=_level;
- (void).cxx_destruct;
@property(retain) NSData *data;
@property(retain) NSString *contentText;
- (_Bool)isValidated;
- (id)initWithText:(id)arg1 andLogInfo:(id)arg2;
- (id)initWithDefaultValue;

@end

