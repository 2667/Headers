//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSDictionary, NSString, O2OSearchMiddleDisplayVC;

@interface O2OSearchDisplayListModel : O2OHTTPListModel
{
    O2OSearchMiddleDisplayVC *_searchLogicManager;
    NSString *_query;
    NSString *_cityCode;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_ftCategoryId;
    NSDictionary *_monitorDic;
    NSString *_currentSearchText;
    NSString *_responseQuery;
}

@property(copy, nonatomic) NSString *responseQuery; // @synthesize responseQuery=_responseQuery;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(copy, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *ftCategoryId; // @synthesize ftCategoryId=_ftCategoryId;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak O2OSearchMiddleDisplayVC *searchLogicManager; // @synthesize searchLogicManager=_searchLogicManager;
- (void).cxx_destruct;
- (_Bool)raise1002Exception;
- (void)didFailWithError:(id)arg1;
- (void)didFinishLoading;
- (_Bool)parseResponse:(id)arg1;
- (void)reset;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (long long)pageSize;
- (id)rpcRequest;
- (long long)pageStart;

@end
