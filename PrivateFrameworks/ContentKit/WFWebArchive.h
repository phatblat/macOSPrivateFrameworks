//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, WFWebResource;

@interface WFWebArchive : NSObject <NSSecureCoding>
{
    WFWebResource *_mainResource;
    NSArray *_subresources;
    NSArray *_subframeArchives;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *subframeArchives; // @synthesize subframeArchives=_subframeArchives;
@property(readonly, nonatomic) NSArray *subresources; // @synthesize subresources=_subresources;
@property(readonly, nonatomic) WFWebResource *mainResource; // @synthesize mainResource=_mainResource;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;

@end
