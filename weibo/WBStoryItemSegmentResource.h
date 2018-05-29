//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBVideoURLItem;

@interface WBStoryItemSegmentResource : WBModelObject
{
    unsigned long long _resourceType;
    NSString *_fileID;
    NSString *_hdURL;
    NSString *_mdURL;
    NSString *_ldURL;
    double _duration;
    WBVideoURLItem *_urlHDItem;
    WBVideoURLItem *_urlMDItem;
    WBVideoURLItem *_urlLDItem;
    WBVideoURLItem *_url720HDItem;
}

@property(retain, nonatomic) WBVideoURLItem *url720HDItem; // @synthesize url720HDItem=_url720HDItem;
@property(retain, nonatomic) WBVideoURLItem *urlLDItem; // @synthesize urlLDItem=_urlLDItem;
@property(retain, nonatomic) WBVideoURLItem *urlMDItem; // @synthesize urlMDItem=_urlMDItem;
@property(retain, nonatomic) WBVideoURLItem *urlHDItem; // @synthesize urlHDItem=_urlHDItem;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *ldURL; // @synthesize ldURL=_ldURL;
@property(copy, nonatomic) NSString *mdURL; // @synthesize mdURL=_mdURL;
@property(copy, nonatomic) NSString *hdURL; // @synthesize hdURL=_hdURL;
@property(copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
- (id)preferredImageURL;
- (_Bool)hasCachedImage;
- (_Bool)hasCachedDecodeImage;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;

@end

