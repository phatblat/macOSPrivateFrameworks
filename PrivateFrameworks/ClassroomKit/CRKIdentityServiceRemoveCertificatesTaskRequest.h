//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSSet;

@interface CRKIdentityServiceRemoveCertificatesTaskRequest : CATTaskRequest
{
    NSSet *_keyPairMarkers;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *keyPairMarkers; // @synthesize keyPairMarkers=_keyPairMarkers;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

