//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class DMFSecurityInformation;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject
{
    DMFSecurityInformation *_securityInformation;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) DMFSecurityInformation *securityInformation; // @synthesize securityInformation=_securityInformation;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityInformation:(id)arg1;

@end
