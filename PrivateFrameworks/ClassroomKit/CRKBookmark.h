//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CRKBookmark : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_urlString;
    NSArray *_childBookmarks;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *childBookmarks; // @synthesize childBookmarks=_childBookmarks;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isFolder;

@end
