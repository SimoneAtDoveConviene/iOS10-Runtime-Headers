/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, CKDPShareIdentifier;

@interface CKDPCommentedOnId : PBCodable <NSCopying> {
    NSData *_itemId;
    CKDPShareIdentifier *_shareIdentifier;
}

@property(readonly) bool hasShareIdentifier;
@property(retain) CKDPShareIdentifier * shareIdentifier;
@property(readonly) bool hasItemId;
@property(retain) NSData * itemId;


- (id)itemId;
- (bool)hasItemId;
- (bool)hasShareIdentifier;
- (void)setItemId:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)shareIdentifier;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end