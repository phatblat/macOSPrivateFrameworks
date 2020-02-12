//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying>
{
    NSString *_sourceIdentifier;
    NSString *_sourceClientIdentifier;
    NSString *_stringRepresentation;
}

+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg1;
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToNotificationIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 stringRepresentation:(id)arg3;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;

@end
