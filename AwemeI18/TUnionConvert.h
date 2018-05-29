//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TUnionConvertService-Protocol.h"

@class NSString;

@interface TUnionConvert : NSObject <TUnionConvertService>
{
    NSString *_appKey;
    NSString *_adzoneId;
}

+ (void)load;
@property(retain, nonatomic) NSString *adzoneId; // @synthesize adzoneId=_adzoneId;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)jump2Url:(unsigned long long)arg1 url:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isTaoBaoURLWithNarrow:(id)arg1;
- (_Bool)isTaoBaoURLWithWide:(id)arg1;
- (_Bool)isSClickURL:(id)arg1;
- (id)buildRequestParams:(id)arg1 params:(id)arg2;
- (void)convert:(id)arg1 params:(id)arg2 webview:(id)arg3 jumpType:(unsigned long long)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithAppkey:(id)arg1 adzoneId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

