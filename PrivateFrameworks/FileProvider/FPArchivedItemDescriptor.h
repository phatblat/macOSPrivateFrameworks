//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface FPArchivedItemDescriptor : NSObject <NSSecureCoding>
{
    NSString *_filePath;
    NSNumber *_fileSize;
    NSString *_typeIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

