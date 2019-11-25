//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface WFWorkflowQuarantine : NSObject <NSCopying>
{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
}

@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (id)serializedData;
- (id)initWithSerializedData:(id)arg1;
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;

@end

