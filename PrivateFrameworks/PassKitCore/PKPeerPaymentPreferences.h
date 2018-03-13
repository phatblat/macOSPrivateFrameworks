//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _requiresConfirmation;
    BOOL _canReceiveFormalPaymentRequests;
}

+ (BOOL)supportsSecureCoding;
+ (id)preferencesWithDictionary:(id)arg1;
@property(nonatomic) BOOL canReceiveFormalPaymentRequests; // @synthesize canReceiveFormalPaymentRequests=_canReceiveFormalPaymentRequests;
@property(nonatomic) BOOL requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

