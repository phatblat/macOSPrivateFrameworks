//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TCMPSImageAnnotation : NSObject <NSCopying>
{
    long long _identifier;
    double _confidence;
    struct CGRect _boundingBox;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
