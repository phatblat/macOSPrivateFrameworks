//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface VCPFaceGeometry : NSObject <NSSecureCoding>
{
    // Error parsing type: ^, name: _vertices
    unsigned long long _vertexCount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
// Error parsing type for property vertices:
// Property attributes: Tr^,R,N

-     // Error parsing type: @32@0:8r^16Q24, name: initWithVertices:vertexCount:

@end
