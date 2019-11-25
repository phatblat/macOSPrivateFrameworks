//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier;

@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    unsigned long long _mascotType;
    unsigned long long _colorType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(nonatomic) unsigned long long mascotType; // @synthesize mascotType=_mascotType;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

