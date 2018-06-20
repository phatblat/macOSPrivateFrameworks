//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface RDPersonSuggestionReply : NSObject <NSSecureCoding>
{
    BOOL _confirmed;
    NSString *_keyFaceLocalIdentifier;
    NSString *_personLocalIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(copy, nonatomic) NSString *keyFaceLocalIdentifier; // @synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

