//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOResource, NSArray, NSData, NSString;

@interface GEOResourceInfo : NSObject
{
    GEOResource *_resource;
    NSArray *_equivalentResources;
    BOOL _allowResumingPartialDownload;
}

@property(nonatomic, getter=_allowResumingPartialDownload, setter=_setAllowResumingPartialDownload:) BOOL allowResumingPartialDownload; // @synthesize allowResumingPartialDownload=_allowResumingPartialDownload;
@property(readonly, nonatomic) GEOResource *resource; // @synthesize resource=_resource;
@property(copy, nonatomic) NSArray *equivalentResources; // @synthesize equivalentResources=_equivalentResources;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *checksum;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) NSString *name;
- (id)initWithResource:(id)arg1;

@end

