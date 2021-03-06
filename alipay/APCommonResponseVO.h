//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface APCommonResponseVO : NSObject
{
    _Bool _isSuccess;
    _Bool _isFromCache;
    _Bool _isLoading;
    _Bool _hasMore;
    long long _returnStatus;
    NSString *_errorDesc;
    NSString *_type;
    NSMutableDictionary *_data;
    NSArray *_indexChar;
    NSArray *_dataArray;
    NSMutableDictionary *_extInfo;
}

@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSArray *indexChar; // @synthesize indexChar=_indexChar;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(nonatomic) long long returnStatus; // @synthesize returnStatus=_returnStatus;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

