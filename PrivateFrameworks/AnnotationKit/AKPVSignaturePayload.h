//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSBezierPath, NSDate;

@interface AKPVSignaturePayload : NSObject <NSSecureCoding>
{
    NSBezierPath *_path;
    double _baselineHeight;
    NSDate *_creationDate;
    NSDate *_lastUsedDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property double baselineHeight; // @synthesize baselineHeight=_baselineHeight;
@property(retain) NSBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
