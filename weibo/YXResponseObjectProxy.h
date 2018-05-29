//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface YXResponseObjectProxy : NSObject <NSCopying, NSCoding>
{
    id responseObject;
}

+ (id)proxyWithResponseObject:(id)arg1;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)throwException;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

