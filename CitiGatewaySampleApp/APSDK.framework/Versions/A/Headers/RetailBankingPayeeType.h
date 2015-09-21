//
//  RetailBankingPayeeType.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingPayeeType
 @abstract RetailBankingPayeeType class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingPayeeType
 @abstract Generated model object: RetailBankingPayeeType.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingPayeeType(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingPayeeType/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingPayeeType : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingPayeeType.
 @result Class representing the data source associated with a RetailBankingPayeeType.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var value
 @abstract Generated model property: value.
 */
@property (nonatomic, strong) NSString * value;

@end
