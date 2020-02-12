//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface SiriUIDismissalOptions : NSObject <NSSecureCoding>
{
    unsigned long long _dismissalReason;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionsWithDismissalReason:(unsigned long long)arg1;
@property(nonatomic) unsigned long long dismissalReason; // @synthesize dismissalReason=_dismissalReason;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDismissalReason:(unsigned long long)arg1;

@end
