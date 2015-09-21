//
//  RetailBankingForeignCurrency.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingForeignCurrency
 @abstract RetailBankingForeignCurrency class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingForeignCurrency
 @abstract Generated model object: RetailBankingForeignCurrency.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingForeignCurrency(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingForeignCurrency/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingForeignCurrency : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingForeignCurrency.
 @result Class representing the data source associated with a RetailBankingForeignCurrency.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var fromCurrency
 @abstract Generated model property: from_currency.
 */
@property (nonatomic, strong) NSString * fromCurrency;

/*!
 @var rate
 @abstract Generated model property: rate.
 */
@property (nonatomic, strong) NSNumber * rate;

/*!
 @var toCurrency
 @abstract Generated model property: to_currency.
 */
@property (nonatomic, strong) NSString * toCurrency;

@end
